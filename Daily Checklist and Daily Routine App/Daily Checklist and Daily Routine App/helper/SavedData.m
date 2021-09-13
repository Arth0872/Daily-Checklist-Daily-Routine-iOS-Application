//
//  SavedData.m
//  Daily Checklist and Daily Routine App
//
//  Created by Nevon on 1/25/20.
//  Copyright © 2020 Nevon. All rights reserved.
//

#import "SavedData.h"

@implementation SavedData

-(void)setTask:(TaskModel*)tm
{
    taskmodel=tm;
}

-(TaskModel*)getTask
{
    return taskmodel;
}

@end
