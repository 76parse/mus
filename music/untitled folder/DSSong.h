//
//  Entity.h
//  music
//
//  Created by dima on 3/29/15.
//  Copyright (c) 2015 dima. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface DSSong : NSManagedObject

@property (nonatomic, retain) NSString * artist;
@property (nonatomic, retain) NSString * link;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * objectid;
@property (nonatomic, retain) NSNumber * rate;

@end