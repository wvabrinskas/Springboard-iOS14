/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CLSAuthTreeNode : NSObject <NSSecureCoding> {

	NSString* _statusID;
	NSString* _identifier;
	long long _status;

}

@property (nonatomic,copy,readonly) NSString * statusID;                //@synthesize statusID=_statusID - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long status;                        //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)status;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)statusID;
-(id)initWithStatusID:(id)arg1 identifier:(id)arg2 status:(long long)arg3 ;
@end
