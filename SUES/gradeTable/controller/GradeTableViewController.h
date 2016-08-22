//
//  GradeTableViewController.h
//  SUES
//
//  Created by lixu on 16/8/18.
//  Copyright © 2016年 lixu. All rights reserved.
//

#import "CoreDataTableViewController.h"
#import "User+Create.h"

@interface GradeTableViewController : CoreDataTableViewController

//给定context，给定数据库
@property (nonatomic,strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic,strong) User *user;

@end
