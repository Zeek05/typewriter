@echo off
Title TypeWriter Demo - www.batch-man.com
cls

REM Including Typewriter Location into the default PATH
Pushd "..\typewriter\bin"
Set "Path=%Path%;%cd%"
Popd

color 09
echo This is a demo of the typewriter plugin.
echo.&pause&Echo.
typewriter "This should display relatively quickly" 50
echo.&pause&Echo.
typewriter "This should display about half as fast" 100
echo.&pause&Echo.
typewriter "A little slower..." 200
echo.&pause&Echo.
typewriter "Half a second" 500
echo.&pause&Echo.
typewriter "One second delay" 1000
echo.&pause&Echo.
echo Demonstration finished.
echo.&pause&Echo.
exit
