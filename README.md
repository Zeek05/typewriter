# typewriter
A very simple typewriter plugin for CMD. Supply the string to print, and the time delay in MS.

### Syntax

The syntax of the plugin is as follows:

**typewriter.exe {"quoted string"} {sleep time in ms}**

### Examples

`**typewriter "hello, world!" 100**` - Displays hello world with a 1/10th of a second delay per character.

![This is an example image](woah.gif)

<!-- wp:code -->
<pre class="wp-block-code"><code>@echo off
Title TypeWriter Demo - www.batch-man.com
cls

REM Including Typewriter Location into the default PATH
Pushd "..\typewriter\bin"
Set "Path=%Path%;%cd%"
Popd

color 09
echo This is a demo of the typewriter plugin.
echo.&amp;pause&amp;Echo.
typewriter "This should display relatively quickly" 50
echo.&amp;pause&amp;Echo.
typewriter "This should display about half as fast" 100
echo.&amp;pause&amp;Echo.
typewriter "A little slower..." 200
echo.&amp;pause&amp;Echo.
typewriter "Half a second" 500
echo.&amp;pause&amp;Echo.
typewriter "One second delay" 1000
echo.&amp;pause&amp;Echo.
echo Demonstration finished.
echo.&amp;pause&amp;Echo.
exit</code></pre>
<!-- /wp:code -->

This will demonstrate diffrent ways to use typewriter plugin
![Animation](https://user-images.githubusercontent.com/82807654/177024378-78e45476-8b56-4d93-8856-bd0c6d058257.gif)

**Video-**https://www.youtube.com/watch?v=BsTxP5uI4Ps

**Article-**https://batch-man.com/typewriter/

