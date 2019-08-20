//
//  AppDelegate.h
//  LearnGitDemo
//
//  Created by Lin Luo on 2019/8/20.
//  Copyright © 2019年 Lin Luo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

