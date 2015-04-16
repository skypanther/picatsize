PicAtSize
===========================================

An Android module that replaces Ti.Media and enables you to specify the desired size of a photo.


INSTALL THE MODULE
-------------------

Mac OS X
--------
Copy the distribution zip file into the `~/Library/Application Support/Titanium` folder

Linux
-----
Copy the distribution zip file into the `~/.titanium` folder

Windows
-------
Copy the distribution zip file into the `C:\ProgramData\Titanium` folder


REGISTER THE MODULE
--------------------

Register your module with your application by editing `tiapp.xml` and adding your module.
Example:

<modules>
	<module version="0.1">com.skypanther.picatsize</module>
</modules>

When you run your project, the compiler will combine your module along with its dependencies
and assets into the application.


USING THE MODULE IN CODE
-------------------------

To use your module in code, you will need to require it.

For example,

	var my_module = require('com.skypanther.picatsize');
	my_module.foo();


