/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ASTIdentityAlias : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isCoreRepairFrameworkAvailable;
+(id)identityAliasWithSerialNumber:(id)arg1 ;
+(id)identityAliasWithMainLogicBoardSerialNumber:(id)arg1 ;
+(id)identityAliasWithChipId:(id)arg1 uniqueChipId:(id)arg2 ;
-(id)init;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSerialNumber:(id)arg1 ;
-(id)initWithMainLogicBoardSerialNumber:(id)arg1 ;
-(id)initWithChipId:(id)arg1 uniqueChipId:(id)arg2 ;
@end
