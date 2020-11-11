/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBAddAutomationActionEvent : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	unsigned _actionIndex;
	NSString* _key;
	NSString* _shortcutIdentifier;
	SCD_Struct_WF8 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasShortcutIdentifier; 
@property (nonatomic,retain) NSString * shortcutIdentifier;              //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasActionIndex; 
@property (assign,nonatomic) unsigned actionIndex;                       //@synthesize actionIndex=_actionIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasActionIdentifier; 
@property (nonatomic,retain) NSString * actionIdentifier;                //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(NSString *)key;
-(unsigned long long)hash;
-(NSString *)actionIdentifier;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)shortcutIdentifier;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)actionIndex;
-(void)setActionIndex:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasActionIdentifier;
-(BOOL)hasShortcutIdentifier;
-(void)setHasActionIndex:(BOOL)arg1 ;
-(BOOL)hasActionIndex;
@end
