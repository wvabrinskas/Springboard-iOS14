/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary, NSString, NSArray, CPSClipMetadataRequest;


@protocol BCSActionPrivate <BCSAction>
@property (nonatomic,copy,readonly) NSDictionary * debugDescriptionDictionary; 
@property (nonatomic,copy,readonly) NSString * extraPreviewText; 
@property (nonatomic,copy,readonly) NSArray * appLinks; 
@property (nonatomic,readonly) BOOL isInvalidDataAction; 
@property (nonatomic,readonly) BOOL isWiFiAction; 
@property (nonatomic,retain) CPSClipMetadataRequest * clipMetadataRequest; 
@required
-(NSArray *)appLinks;
-(NSString *)extraPreviewText;
-(NSDictionary *)debugDescriptionDictionary;
-(BOOL)isInvalidDataAction;
-(BOOL)isWiFiAction;
-(CPSClipMetadataRequest *)clipMetadataRequest;
-(void)setClipMetadataRequest:(id)arg1;

@end

