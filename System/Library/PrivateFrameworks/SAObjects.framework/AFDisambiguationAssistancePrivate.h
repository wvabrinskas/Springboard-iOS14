/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSData, AFDisambiguationInfo;


@protocol AFDisambiguationAssistancePrivate
@property (nonatomic,readonly) NSData * af_disambiguationIdentifier; 
@property (setter=af_setDisambiguationInfo:,nonatomic,retain) AFDisambiguationInfo * af_disambiguationInfo; 
@required
-(NSData *)af_disambiguationIdentifier;
-(id)af_indexIdentifierForItem:(id)arg1;
-(id)af_itemForIndexIdentifier:(id)arg1;
-(AFDisambiguationInfo *)af_disambiguationInfo;
-(void)af_setDisambiguationInfo:(id)arg1;

@end

