/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, VCPBIntentDefinition;

@interface VCPBIntentDefinitionChange : PBCodable <NSCopying> {

	NSString* _associatedBundleID;
	int _changeType;
	VCPBIntentDefinition* _intentDefinition;

}

@property (assign,nonatomic) int changeType;                                       //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * associatedBundleID;                        //@synthesize associatedBundleID=_associatedBundleID - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentDefinition; 
@property (nonatomic,retain) VCPBIntentDefinition * intentDefinition;              //@synthesize intentDefinition=_intentDefinition - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
-(unsigned long long)hash;
-(int)StringAsChangeType:(id)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(VCPBIntentDefinition *)intentDefinition;
-(void)setIntentDefinition:(VCPBIntentDefinition *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)associatedBundleID;
-(void)setAssociatedBundleID:(NSString *)arg1 ;
-(BOOL)hasIntentDefinition;
@end

