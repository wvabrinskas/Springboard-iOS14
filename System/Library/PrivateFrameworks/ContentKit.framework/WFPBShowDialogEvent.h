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

@interface WFPBShowDialogEvent : PBCodable <NSCopying> {

	NSString* _automationType;
	NSString* _dialogType;
	NSString* _dismissalType;
	NSString* _key;
	NSString* _presentationStyle;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasDialogType; 
@property (nonatomic,retain) NSString * dialogType;                     //@synthesize dialogType=_dialogType - In the implementation block
@property (nonatomic,readonly) BOOL hasPresentationStyle; 
@property (nonatomic,retain) NSString * presentationStyle;              //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasDismissalType; 
@property (nonatomic,retain) NSString * dismissalType;                  //@synthesize dismissalType=_dismissalType - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationType; 
@property (nonatomic,retain) NSString * automationType;                 //@synthesize automationType=_automationType - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(NSString *)key;
-(unsigned long long)hash;
-(NSString *)presentationStyle;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)dialogType;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(void)setPresentationStyle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDialogType:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDismissalType:(NSString *)arg1 ;
-(NSString *)dismissalType;
-(BOOL)hasDialogType;
-(BOOL)hasPresentationStyle;
-(BOOL)hasDismissalType;
-(BOOL)hasAutomationType;
@end
