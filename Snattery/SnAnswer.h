//
//  SnAnswer.h
//  Snattery
//
//  Created by Souvik Ray on 8/15/14.
//  Copyright (c) 2014 com.snattery. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class SnQuestion, SnUser;

@interface SnAnswer : NSManagedObject

@property (nonatomic, retain) NSDate * createdAt;
@property (nonatomic, retain) NSString * objectid;
@property (nonatomic, retain) NSString * anstxt;
@property (nonatomic, retain) NSNumber * rating;
@property (nonatomic, retain) NSDate * timestamp;
@property (nonatomic, retain) NSNumber * tokens;
@property (nonatomic, retain) NSDate * updatedAt;
@property (nonatomic, retain) SnUser *atou;
@property (nonatomic, retain) SnQuestion *atoq;

@end
