/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUI/PhotosUI-Structs.h>
@class PUAssetReference, NSDate;

@interface PUAssetDisplayDescriptor : NSObject {

	PUAssetReference* _assetReference;
	NSDate* _modifiedAfterDate;
	SCD_Struct_PH4 _videoSeekTime;

}

@property (nonatomic,readonly) PUAssetReference * assetReference;              //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH4 videoSeekTime;                   //@synthesize videoSeekTime=_videoSeekTime - In the implementation block
@property (nonatomic,readonly) NSDate * modifiedAfterDate;                     //@synthesize modifiedAfterDate=_modifiedAfterDate - In the implementation block
+(id)assetDisplayDescriptorForSimpleNavigationToAssetReference:(id)arg1 ;
-(id)init;
-(id)initWithAssetReference:(id)arg1 modifiedAfterDate:(id)arg2 videoSeekTime:(SCD_Struct_PH4)arg3 ;
-(SCD_Struct_PH4)videoSeekTime;
-(NSDate *)modifiedAfterDate;
-(PUAssetReference *)assetReference;
@end

