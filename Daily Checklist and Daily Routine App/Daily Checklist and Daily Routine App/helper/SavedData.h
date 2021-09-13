//
//  SavedData.h
//  Daily Checklist and Daily Routine App
//
//  Created by Nevon on 1/25/20.
//  Copyright © 2020 Nevon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TaskModel.h"

NS_ASSUME_NONNULL_BEGIN

TaskModel *taskmodel;

@interface SavedData : NSObject

-(void)setTask:(TaskModel*)tm;
-(TaskModel*)getTask;

@end

NS_ASSUME_NONNULL_END
