/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKContainerID : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isTestContainer;
	BOOL _isAppleInternal;
	NSString* _containerIdentifier;
	long long _environment;
	long long _specialContainerType;

}

@property (assign,nonatomic) long long specialContainerType;                     //@synthesize specialContainerType=_specialContainerType - In the implementation block
@property (assign,nonatomic) BOOL isTestContainer;                               //@synthesize isTestContainer=_isTestContainer - In the implementation block
@property (assign,nonatomic) BOOL isAppleInternal;                               //@synthesize isAppleInternal=_isAppleInternal - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) long long environment;                            //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isAppleInternal;
-(id)CKPropertiesDescription;
-(void)_deriveContainerAttributes;
-(unsigned long long)hash;
-(id)ckShortDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)sqliteRepresentation;
-(NSString *)containerIdentifier;
-(id)description;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)environment;
-(void)setIsAppleInternal:(BOOL)arg1 ;
-(void)setIsTestContainer:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSpecialContainerType:(long long)arg1 ;
-(BOOL)isTestContainer;
-(long long)specialContainerType;
-(id)initWithContainerIdentifier:(id)arg1 environment:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)representativeDataclass;
@end

