:: run at command line: copy_part2 .
copy /Y %1"\Debug\HelloWorldPart2.dll" %1"\Interop101Part2_Client\bin\Debug"
copy /Y %1"\Debug\HelloWorldPart2.dll" %1"\Interop101Part2_Client\obj\x86\Debug"
copy /Y %1"\Release\HelloWorldPart2.dll" %1"\Interop101Part2_Client\bin\Release"
copy /Y %1"\Release\HelloWorldPart2.dll" %1"\Interop101Part2_Client\obj\x86\Release"

:: Project: Interop101Part2_CLRClient
:: Item: HelloWorldPart2.dll
:: Post Build: call "$(SolutionDir)copy_part2.cmd" "$(SolutionDir)/"