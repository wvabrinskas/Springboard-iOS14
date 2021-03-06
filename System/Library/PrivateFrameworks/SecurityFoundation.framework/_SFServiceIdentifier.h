/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _SFServiceIdentifier : NSObject <NSCopying, NSSecureCoding> {

	id _serviceIdentifierInternal;

}

@property (getter=_lookupKey,nonatomic,copy,readonly) NSString * lookupKey; 
@property (nonatomic,copy,readonly) NSString * serviceID; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)serviceIdentifierForDomain:(id)arg1 ;
+(id)serviceIdentifierForURL:(id)arg1 ;
+(id)serviceIdentifierForBundleID:(id)arg1 ;
+(id)serviceIdentifierForAccessGroup:(id)arg1 ;
+(id)serviceIdentifierForCustomString:(id)arg1 ;
-(NSString *)serviceID;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_lookupKey;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithServiceID:(id)arg1 forType:(long long)arg2 ;
@end

