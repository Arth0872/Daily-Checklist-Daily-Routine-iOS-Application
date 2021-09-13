//
//  TaskHistory.h
//  Daily Checklist and Daily Routine App
//
//  Created by Nevon on 1/25/20.
//  Copyright © 2020 Nevon. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TaskHistory : UIViewController<UITableViewDataSource,UIPickerViewDelegate,UIPickerViewDataSource>
{
    UIDatePicker *datepick;
}

@property(strong,nonatomic) IBOutlet UITableView *Table;
@property (strong, nonatomic) IBOutlet UIImageView *nolistimg;
@property (strong, nonatomic) IBOutlet UITextField *datetext;

-(IBAction)back_click:(id)sender;

@end

NS_ASSUME_NONNULL_END
