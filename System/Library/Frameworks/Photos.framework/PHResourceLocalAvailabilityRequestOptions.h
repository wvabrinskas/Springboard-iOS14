/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PHResourceLocalAvailabilityRequestOptions : NSObject {

	BOOL _treatLivePhotoAsStill;
	BOOL _dontAllowRAW;
	BOOL _includeAllAssetResources;

}

@property (assign,nonatomic) BOOL treatLivePhotoAsStill;                 //@synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill - In the implementation block
@property (assign,nonatomic) BOOL dontAllowRAW;                          //@synthesize dontAllowRAW=_dontAllowRAW - In the implementation block
@property (assign,nonatomic) BOOL includeAllAssetResources;              //@synthesize includeAllAssetResources=_includeAllAssetResources - In the implementation block
-(BOOL)dontAllowRAW;
-(BOOL)includeAllAssetResources;
-(void)setIncludeAllAssetResources:(BOOL)arg1 ;
-(BOOL)treatLivePhotoAsStill;
-(void)setTreatLivePhotoAsStill:(BOOL)arg1 ;
-(void)setDontAllowRAW:(BOOL)arg1 ;
-(id)description;
@end

