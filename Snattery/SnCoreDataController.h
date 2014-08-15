//
//  SnCoreDataController.h
//  Snattery
//
//  Created by Souvik Ray on 8/15/14.
//  Copyright (c) 2014 com.snattery. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SnCoreDataController : NSObject

+ (id)sharedInstance;

- (NSURL *)applicationDocumentsDirectory;

- (NSManagedObjectContext *)masterManagedObjectContext;
- (NSManagedObjectContext *)backgroundManagedObjectContext;
- (NSManagedObjectContext *)newManagedObjectContext;
- (void)saveMasterContext;
- (void)saveBackgroundContext;
- (NSManagedObjectModel *)managedObjectModel;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;

@end
