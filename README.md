# GOAP NPC Plugin

Hi there!

We are a group of students from the Faculty of Computer Science at the Complutense University of Madrid. We have developed, as part of our final degree project, a plugin for Unreal Engine 4 called GOAP NPC. This plugin aims to help with the creation of Artificial Intelligence on Non-Player Characters, based on using a Goal Oriented Action Planning (GOAP) architecture.

Most developers usually use Behavior Trees to decide what the NPCs can do. It is very intuitive and easy to get started with. However, as the complexity of the scenario grows, it becomes really hard to handle. That's when GOAP comes into play. One of the most important differences with Behavior Trees is the ability of GOAP to react to external changes and dynamically modify the plan during runtime. You can obtain more information about GOAP [here](http://alumni.media.mit.edu/~jorkin/GOAP_draft_AIWisdom2_2003.pdf).

Currently we are contacting developers who have a minimum of knowledge about developing videogames with Blueprints on Unreal Engine to ask for help in testing our tool and sharing their experience. The test involves the creation by the developer of a simple controller for a NPC with a few actions and both kind of planners (first with Behavior Trees, and then using GOAP). You can access the survey [here](https://forms.gle/i9UivkxC117v6Eci8).

We greatly appreciate the help that you can provide us. It will be very useful to contribute to the improvement of our plugin, and to help everyone to better understand the usefulness of AI planning tools. If you have any questions or want to know more about it, please contact us by [email](fpeinado@ucm.es).

Thank you very much!
- Diego Romero, Mario Sanchez & Jose Manuel Sierra

## To open the project

1. Right click on the .uproject file and choose the "Generate Visual Studio project files" option.
2. Wait for the .sln file to be generated and run it.
3. While everything is loading in Visual Studio, you can open the project in Unreal or launch from VS.
  1. Right click on the .uproject file and choose the "Generate Visual Studio project files" option.
  2. Wait for the .sln file to be generated and run it.
  3. While everything is loading in Visual Studio, you can open the project in Unreal or launch from VS.

## Demo hotkeys
  Change AI goal:
  - { Z } Get Coin.
  - { X } Follow Character.
