package edu.illinois.cs.testrunner.execution;

import org.junit.runner.Description;
import org.junit.runner.notification.Failure;
import org.junit.runner.notification.RunListener;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

//Majid
import ch.usi.overseer.OverHpc;



public class TestListener extends RunListener {
    private final Map<String, Long> times;
    private final Map<String, Double> testRuntimes;
    private final Set<String> ignoredTests;
	OverHpc oHpc ;
	int pid;
	long valueC1;
	
    public TestListener() {
		System.out.println("*************MMAJID TestListener");
        testRuntimes = new HashMap<>();
        times = new HashMap<>();
        ignoredTests = new HashSet<>();
		oHpc = OverHpc.getInstance();
		pid = oHpc.getThreadId();
		
		if (oHpc.initEvents("BRANCH_INSTRUCTIONS_RETIRED") == false)
		{
			System.out.println("MMAJID ERROR: invalid event");
			return;
		}
		oHpc.bindEventsToThread(pid);
    }

    public Set<String> ignored() {
		System.out.println("*************MMAJID ignored");
        return ignoredTests;
    }

    public Map<String, Double> runtimes() {
		System.out.println("*************MMAJID runtimes");
        return testRuntimes;
    }

    @Override
    public void testIgnored(Description description) throws Exception {
		System.out.println("*************MMAJID testIgnored");
        ignoredTests.add(JUnitTestRunner.fullName(description));
    }

    

    @Override
    public void testFailure(Failure failure) throws Exception {
		System.out.println("*************MMAJID testFailure");
        failure.getException().printStackTrace();
    }

    @Override
    public void testAssumptionFailure(Failure failure) {
		System.out.println("*************MMAJID testAssumptionFailure");
        failure.getException().printStackTrace();
    }


	@Override
    public void testStarted(Description description) throws Exception {
		System.out.println("*************MMAJID testStarted");
        times.put(JUnitTestRunner.fullName(description), System.nanoTime());
		//Majid
		valueC1 = oHpc.getEventFromThread(pid, 0);
    }
    @Override
    public void testFinished(Description description) throws Exception {
		System.out.println("*************MMAJID testFinished");
        final String fullTestName = JUnitTestRunner.fullName(description);
		//Majid
		long delta = oHpc.getEventFromThread(pid, 0)-valueC1 ;
		System.out.println("MMAJIDRun: "+ delta + "for "+fullTestName+" info: "+description.toString());
		
        if (times.containsKey(fullTestName)) {
            final long startTime = times.get(fullTestName);
            testRuntimes.put(fullTestName, (System.nanoTime() - startTime) / 1E9);
        } else {
            System.out.println("Test finished but did not start: " + fullTestName);
        }
    }
}
