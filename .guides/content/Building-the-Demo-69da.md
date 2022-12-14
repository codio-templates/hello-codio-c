----------

## Building the Demo

Instruction through Codio is built around the guides feature. This is a brief description on how the demo on the previous page was built. Please see the [documentation](https://docs.codio.com/courses/authoring/) for more information about content authoring with guides.



||| info
### To try this out
You’ll need to be in Edit Mode. From the top tool bar menu, select  **Tools->Guide->Edit**.


![.guides/img/editGuide](.guides/img/editGuide.png)
|||

### Page Layout
Each page in the guide can have its own layout. You can select how many panels you want, and what information goes in each panel. The most common layout is two panels without the tree. The guide is in one panel and the code editor is in the other. Click the gear in the top-right corner of Codio. You can select the layout from here. The default layout is copy the previous page, and Codio does not close any open tabs.

![Layout](.guides/img/layout.png)

It is a good idea to explicitly state the layout you want. Closing tabs from previous pages also keeps the UI free from unnecessary clutter.

### Code Editor
To use the code editor, add a programming file to your project. Right-click (Control-click for Mac) on the name of your project or book in the directory tree on the left. Select `New File...` and then type its name and file extension.

![.guides/img/create_new_file](.guides/img/add_c_file.png)

The next step is to load this file into a panel of your layout. Click on the gear icon again, and click on the `Open Tabs` button. You can click the button and type the file's path to add a new file to the layout. Or, you drag the file from the directory tree onto the page. There is a preview option for documents, which allows you to see the output of an HTML/CSS/JS project.

![.guides/img/coding_file](.guides/img/open_c_file.png)

This file will open with the guide. The file will remain opened until the student closes the tab. This is why it is a good idea to tell Codio to close any previously opened tabs when selecting the layout.

### Markdown
Guides are authored with [markdown](https://docs.codio.com/courses/authoring/#markdown-content-editing), but you can use any HTML to author content. The drop-down text is an example of the `<details>` and `<summary>` tags.


### Images
You will notice a folder called `.guides` in the File Tree. To view the File Tree, select **View->File Tree**. All of the information in this folder is hidden from students. There is a subfolder called `img` where you can upload any images you want to appear in the guide. Right-click on the `img` folder and select `Upload...`.

![.guides/img/upload](.guides/img/upload.png)

Add the image to the guide using markdown syntax.

### Compile and Run Buttons

Codio has syntax to add a [custom button](https://docs.codio.com/courses/authoring/#custom-buttons) to your guide. On the previous page, the `COMPILE CODE` button runs the command `gcc -o c_demo c_demo.c` and the `RUN CODE` button runs the command `./c_demo`. The terminal can always be added to a panel if you would rather have students interact with the command line.

### Code Visualizer
Codio integrates the [Python Tutor](http://pythontutor.com/) into its platform. It works with a variety of languages (despite its name). To add a code visualizer to your guide, use the following syntax `[Code Visualizer](open_tutor your_file.c)`.

### Code Highlighting
You can create links that [highlight](https://docs.codio.com/courses/authoring/#examples) sections of code. It is important to note that opening a file with highlighting will retain the highlighting. Adding another link to open the same file without highlighting will "remove" the highlighting.