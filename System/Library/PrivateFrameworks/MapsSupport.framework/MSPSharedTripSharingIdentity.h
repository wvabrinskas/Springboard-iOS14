/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MSPSharedTripSharingIdentity : NSObject <NSSecureCoding> {

	BOOL _validAccount;
	NSString* _name;
	NSString* _handle;
	NSArray* _aliases;

}

@property (getter=hasValidAccount,nonatomic,readonly) BOOL validAccount;              //@synthesize validAccount=_validAccount - In the implementation block
@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * handle;                                     //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSArray * aliases;                                     //@synthesize aliases=_aliases - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)aliases;
-(NSString *)handle;
-(BOOL)hasValidAccount;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithValidAccount:(BOOL)arg1 name:(id)arg2 handle:(id)arg3 aliases:(id)arg4 ;
@end
