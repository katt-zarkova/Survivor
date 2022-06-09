Data structures project FMI - https://github.com/natigeorgieva/SDP-2021-2022/blob/main/Project/CastAway.md
# Class Survivor

After a ship's accident, our shipwreck is the only survivor of a deserted archipelago of three islands. With his small battery left, he manages to call for help, but unfortunately
rescue team can only arrive in 30 days. Unfortunately for him, also in the place where he is, there are often large storms (every day the probability of one is 10%).
Your job is to help him survive.

## For the Shipwright

Our survivor has the following things:
* health bar
* hunger bar
* thirst bar
    * If any bar reaches 0, the survivor die. 
* Inventory (linked list)

Every day you have the choice to:
* You hunt for food
    * Consumption is not mandatory at the moment, it can also be stored in the inventory 
    * There are two types of animals 
        * Harmless: They saturate less and pose little risk of injury when hunting
        * Dangerous: Saturate more, but pose a greater risk of injury
    * You can hunt 2 animals a day (of which type you wish). 
* Search for drinking water 
* Building a shelter, making weapons (which is destroyed when used) or increasing the size of the inn
    * The weapon reduces the risk of hunting by 30% (your choice is whether you will use it)

Selecting one of the three actions restores you the corresponding bar with (the difference between the maximum value - the current one) / (random number between 1 and 5), while losing
the other two, with shelter, 20% and each subsequent upgrade increasing that percentage by 5%. 
  * In the case of food: 
      * Dangerous animals saturate by this difference, but divided by number 1 and 3
          * The risk of injury is between 50% and 70% (depending on the island)
      * Safe saturation by the same difference divided by 4 or 5
          * The risk of injury is between 10% and 30% (depending on the island)

If you have food in the invenora, however, you can consume it at the end of the day, regardless of which of the three actions you choose (of course in this case you do not have the other bar's)

Burritos are at the beginning of the day and, if you come across a sow, you fill up all the way, but you lose two-and-a-half of the health bar, the shelter is destroyed and your inn is emptied.

## About the Islands

On each island, the resources (food) go to survive 10 days, unfortunately, however, in a storm the possibility of a stay is 4 days. 

In the case of the exhaustion of possible survival days on the island:

Resources are restored quickly (3 days), as long as there's no one to get in their way. That is, you have the choice to sit for 4 days without food or go to another island, which will cost you 10% of each bar.

* Let a file record every day what happens:
  What action have you chosen, how your bar changes, you change an island, etc.
  
Your goal is to survive 1 month. 
