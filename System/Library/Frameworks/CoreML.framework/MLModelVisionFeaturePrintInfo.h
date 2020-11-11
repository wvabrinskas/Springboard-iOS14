/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MLModel;

@interface MLModelVisionFeaturePrintInfo : NSObject {

	unsigned long long _version;
	id _featureExtractorParameters;
	MLModel* _postVisionFeaturePrintModel;

}

@property (nonatomic,retain) id featureExtractorParameters;                      //@synthesize featureExtractorParameters=_featureExtractorParameters - In the implementation block
@property (assign,nonatomic) unsigned long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) MLModel * postVisionFeaturePrintModel;              //@synthesize postVisionFeaturePrintModel=_postVisionFeaturePrintModel - In the implementation block
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)featureExtractorParameters;
-(void)setFeatureExtractorParameters:(id)arg1 ;
-(MLModel *)postVisionFeaturePrintModel;
-(void)setPostVisionFeaturePrintModel:(MLModel *)arg1 ;
@end
