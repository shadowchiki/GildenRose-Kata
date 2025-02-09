# TextTest regression tests

This folder contains Text-Based Approval tests for the GildedRose Refactoring Kata designed by Emily Bache. They are fairly comprehensive and well worth using if you'd prefer to go straight to the refactoring without writing your own tests first.

These tests are designed to be used with the open source testing tool "TextTest", available from [http://texttest.org](http://texttest.org).

## Running TextTest

The instructions are slightly different depending on your platform.

### Running TextTest on Linux or MacOS

There is a convenience script 'start_texttest.sh' in the root folder of this repo. This script assumes you already have Python installed. This script will first create a virtual python environment and install texttest if you haven't done that before, then run the tests.

### Running TextTest on Windows

Download the installer as explained on [TextTest.org](http://www.texttest.org/getting_started/install_windows.html). Make sure the texttest executable is on your PATH. Then use the convenience script 'start_texttest.bat'  in the root folder of this repo to run the tests on the console.

Windows may warn you that it doesn't trust this installer and be reluctant to download it. If you prefer not to continue with this, an alternative is to run TextTest via Python. First install Python then use the convenience script 'start_texttest_from_python.bat'.

## Interpreting Test Results

You should see output like this if the test passes:

    Using local queues for Application Gilded Rose Refactoring Kata
    Q: Submitting Gilded Rose Refactoring Kata test-case ThirtyDays to default local queue
    S: Gilded Rose Refactoring Kata test-case ThirtyDays succeeded on Emilys-MBP

If the test fails it might look like this:

    Using local queues for Application Gilded Rose Refactoring Kata
    Q: Submitting Gilded Rose Refactoring Kata test-case ThirtyDays to default local queue
    S: Gilded Rose Refactoring Kata test-case ThirtyDays FAILED on Emilys-MBP : differences in stdout
    View details(v), Approve(a) or continue(any other key)?


If you press 'v' it will try to open the diff tool you specified in 'config.gr' to show you the difference in output. If you press 'a' it will update the approved file - you will not want to do this if you are refactoring. Any other key will return you to the terminal prompt.

