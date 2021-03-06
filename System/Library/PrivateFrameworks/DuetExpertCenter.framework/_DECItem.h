/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/_DECItemEquivalency.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSMutableDictionary, NSString;

@interface _DECItem : NSObject <_DECItemEquivalency, NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	NSMutableDictionary* _metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(unsigned long long)category;
+(BOOL)supportsSecureCoding;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSMutableDictionary *)metadata;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)isEqualToItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

