# 1. Installing the CLI 
## Run either of these commands in your project directory terminal 
- **yarn add --dev all-contributors-cli**
### OR
- **npm i -D all-contributors-cli**
#### Note : Make sure you have installed yarn or node in your machine.


# 2. Init the Project
- **yarn all-contributors init**
### OR
- **npx all-contributors init** 

### Or directly execute the bin
- **./node_modules/.bin/all-contributors init**


# 3. Scripts in *package.json* file
```json
"scripts": {
    "contributors:add": "all-contributors add",
    "contributors:generate": "all-contributors generate",
    "contributors:init": "all-contributors init",
    "contributors:check": "all-contributors check"
 },
 ```
 
 # 4. Important commands and their use
 - **yarn contributors:add {username} {contribution}** [See contribution types and their emojis](#emoji-key-and-contribution-types)
 ```
  Adds new contributor <username>, who made a contribution of type <contribution>

  eg - yarn contributors:add jfmengels code,doc
 ```
 - **yarn contributors:generate**
```
Use generate to read the contributors list from your .all-contributorsrc file and update the contributor tables specified 
by the files key.
```

# Emoji Key and Contribution Types

|       Emoji/Type       |        Represents        |                                         Comments                                         |
|:----------------------:|:------------------------:|:----------------------------------------------------------------------------------------:|
|       🔊<br>audio       |           Audio          |                        Podcasts, background music or sound effects                       |
|        ♿️<br>a11y       |       Accessibility      |                       Reporting or working on accessibility issues                       |
|        🐛<br>bug        |        Bug reports       |                   Links to issues reported by the user on this project                   |
|        📝<br>blog       |         Blogposts        |                                   Links to the blogpost                                  |
|      💼<br>business     |   Business Development   |                          People who execute on the business end                          |
|        💻<br>code       |           Code           |                       Links to commits by the user on this project                       |
|      🖋<br>content      |          Content         |                        e.g. website copy, blog posts are separate                        |
|        🔣<br>data       |           Data           |            Links to contributed data for the project (both tests and datasets)           |
|        📖<br>doc        |       Documentation      |   Links to commits by the user on this project, Wiki, or other source of documentation   |
|       🎨<br>design      |          Design          |                     Links to the logo/iconography/visual design/etc.                     |
|      💡<br>example      |         Examples         |                                   Links to the examples                                  |
|  📋<br>eventOrganizing  |     Event Organizers     |                                    Links to event page                                   |
|     💵<br>financial     |     Financial Support    |           People or orgs who provide financial support, links to relevant page           |
|   🔍<br>fundingFinding  |   Funding/Grant Finders  |                          People who help find financial support                          |
|       🤔<br>ideas       |     Ideas & Planning     |                                                                                          |
|       🚇<br>infra       |      Infrastructure      | Hosting, Build-Tools, etc. Links to source file (like travis.yml) in repo, if applicable |
|    🚧<br>maintenance    |        Maintenance       |   People who help in maintaining the repo, links to commits by the user on this project  |
|     🧑‍🏫<br>mentoring    |         Mentoring        |                People who mentor new contributors, links to the repo home                |
|      📦<br>platform     |         Packaging        |                             Porting to support a new platform                            |
|       🔌<br>plugin      | Plugin/utility libraries |                                  Links to the repo home                                  |
| 📆<br>projectManagement |    Project Management    |                                                                                          |
|      💬<br>question     |    Answering Questions   |            Answering Questions in Issues, Stack Overflow, Gitter, Slack, etc.            |
|      🔬<br>research     |         Research         |                                    Literature review.                                    |
|       👀<br>review      |  Reviewed Pull Requests  |                                                                                          |
|      🛡️<br>security     |         Security         |                Identify and/or reduce security threats, GDPR, Privacy, etc               |
|        🔧<br>tool       |           Tools          |                                  Links to the repo home                                  |
|    🌍<br>translation    |        Translation       |                              Links to the translated content                             |
|        ⚠️<br>test       |           Tests          |                       Links to commits by the user on this project                       |
|      ✅<br>tutorial     |         Tutorials        |                                   Links to the tutorial                                  |
|        📢<br>talk       |           Talks          |                          Links to the slides/recording/repo/etc                          |
|    📓<br>userTesting    |       User Testing       |                                 Links to user test notes                                 |
|       📹<br>video       |          Videos          |                                    Links to the video                                    |