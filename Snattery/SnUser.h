//
//  SnUser.h
//  Snattery
//
//  Created by Souvik Ray on 8/15/14.
//  Copyright (c) 2014 com.snattery. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface SnUser : NSManagedObject

@property (nonatomic, retain) NSString * objectid;
@property (nonatomic, retain) NSNumber * rating;
@property (nonatomic, retain) NSString * socialID;
@property (nonatomic, retain) NSNumber * tokens;
@property (nonatomic, retain) NSString * uname;
@property (nonatomic, retain) NSSet *utoa;
@property (nonatomic, retain) NSSet *utoq;
@end

@interface SnUser (CoreDataGeneratedAccessors)

- (void)addUtoaObject:(NSManagedObject *)value;
- (void)removeUtoaObject:(NSManagedObject *)value;
- (void)addUtoa:(NSSet *)values;
- (void)removeUtoa:(NSSet *)values;

- (void)addUtoqObject:(NSManagedObject *)value;
- (void)removeUtoqObject:(NSManagedObject *)value;
- (void)addUtoq:(NSSet *)values;
- (void)removeUtoq:(NSSet *)values;

@end
