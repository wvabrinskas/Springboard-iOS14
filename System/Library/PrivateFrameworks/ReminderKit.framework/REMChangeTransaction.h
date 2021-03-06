/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, REMObjectID, NSString, REMChangeToken;

@interface REMChangeTransaction : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _timestamp;
	NSArray* _changes;
	REMObjectID* _accountID;
	NSString* _storeID;
	NSString* _author;
	REMChangeToken* _token;

}

@property (nonatomic,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSArray * changes;                    //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) REMObjectID * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * storeID;                   //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) NSString * author;                    //@synthesize author=_author - In the implementation block
@property (nonatomic,readonly) REMChangeToken * token;               //@synthesize token=_token - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)changes;
-(NSString *)storeID;
-(REMObjectID *)accountID;
-(NSString *)author;
-(void)encodeWithCoder:(id)arg1 ;
-(REMChangeToken *)token;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

