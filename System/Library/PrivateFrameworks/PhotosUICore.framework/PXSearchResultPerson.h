/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXNewSearchResult.h>

@class NSString;

@interface PXSearchResultPerson : NSObject <PXNewSearchResult> {

	NSString* _personUUID;
	NSString* _identifier;
	unsigned long long _type;
	NSString* _title;
	NSString* _subtitle;
	unsigned long long _assetCount;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned long long assetCount;              //@synthesize assetCount=_assetCount - In the implementation block
@property (nonatomic,copy) NSString * personUUID;                        //@synthesize personUUID=_personUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uniqueIdentiferFromPersonUUID:(id)arg1 displayName:(id)arg2 ;
-(id)init;
-(unsigned long long)hash;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)personUUID;
-(void)setPersonUUID:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 assetCount:(unsigned long long)arg2 personUUID:(id)arg3 identifier:(id)arg4 ;
-(NSString *)title;
-(unsigned long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAssetCount:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)assetCount;
@end
