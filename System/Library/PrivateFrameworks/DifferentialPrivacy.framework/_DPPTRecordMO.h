/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface _DPPTRecordMO : NSManagedObject

@property (nonatomic,retain) NSString * privateValue; 
@property (assign,nonatomic) double creationDate; 
@property (nonatomic,retain) NSString * key; 
@property (assign,nonatomic) BOOL submitted; 
@property (assign,nonatomic) long long reportVersion; 
+(id)fetchRequest;
@end

