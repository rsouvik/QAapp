//
//  QAAppDelegate.h
//  Snattery
//
//  Created by Souvik Ray on 7/30/14.
//  Copyright (c) 2014 com.snattery. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QAAppLoginViewController;

@interface QAAppDelegate : UIResponder <UIApplicationDelegate,UINavigationControllerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (strong, nonatomic) QAAppLoginViewController* loginViewController;
@property (strong, nonatomic) UINavigationController *navigationController;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
