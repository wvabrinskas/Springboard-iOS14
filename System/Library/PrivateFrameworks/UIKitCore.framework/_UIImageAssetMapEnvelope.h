/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImageAsset, NSString;

@interface _UIImageAssetMapEnvelope : NSObject {

	UIImageAsset* _imageAsset;
	NSString* _assetName;

}

@property (assign,nonatomic,__weak) UIImageAsset * imageAsset;              //@synthesize imageAsset=_imageAsset - In the implementation block
@property (nonatomic,copy) NSString * assetName;                            //@synthesize assetName=_assetName - In the implementation block
+(id)wrapAsset:(id)arg1 ;
-(void)setImageAsset:(UIImageAsset *)arg1 ;
-(id)description;
-(UIImageAsset *)imageAsset;
-(NSString *)assetName;
-(void)setAssetName:(NSString *)arg1 ;
@end
