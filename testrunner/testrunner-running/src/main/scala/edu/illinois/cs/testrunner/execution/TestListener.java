package edu.illinois.cs.testrunner.execution;

import org.junit.runner.Description;
import org.junit.runner.notification.Failure;
import org.junit.runner.notification.RunListener;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class TestListener extends RunListener {
    private final Map<String, Long> times;
    private final Map<String, Double> testRuntimes;
    private final Set<String> ignoredTests;

    public TestListener() {
		System.out.println("***********************Test TestListener");
        testRuntimes = new HashMap<>();
        times = new HashMap<>();
        ignoredTests = new HashSet<>();
    }

    public Set<String> ignored() {
		System.out.println("***********************Test ignored");
        return ignoredTests;
    }

    public Map<String, Double> runtimes() {
		System.out.println("***********************Test runtimes");
        return testRuntimes;
    }

    @Override
    public void testIgnored(Description description) throws Exception {
		System.out.println("***********************Test testIgnored");
        ignoredTests.add(JUnitTestRunner.fullName(description));
    }

    @Override
    public void testStarted(Description description) throws Exception {
		System.out.println("***********************Test started " );
        times.put(JUnitTestRunner.fullName(description), System.nanoTime());
    }

    @Override
    public void testFailure(Failure failure) throws Exception {
		System.out.println("***********************Test testFailure");
        failure.getException().printStackTrace();
    }

    @Override
    public void testAssumptionFailure(Failure failure) {
		System.out.println("***********************Test testAssumptionFailure");
        failure.getException().printStackTrace();
    }

    @Override
    public void testFinished(Description description) throws Exception {
		
        final String fullTestName = JUnitTestRunner.fullName(description);
		System.out.println("***********************Test finished" + fullTestName);
        if (times.containsKey(fullTestName)) {
            final long startTime = times.get(fullTestName);
            testRuntimes.put(fullTestName, (System.nanoTime() - startTime) / 1E9);
        } else {
            System.out.println("Test finished but did not start: " + fullTestName);
        }
    }
}
