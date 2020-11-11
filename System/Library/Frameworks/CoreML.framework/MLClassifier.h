/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLClassifier.h>

@protocol MLClassifier <MLModeling>
@required
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)classLabels;

@end


@class MLModelDescription, MLModelInterface, MLModelMetadata;

@interface MLClassifier : MLModel <MLClassifier>

@property (nonatomic,retain) MLModelDescription * modelDescription; 
@property (readonly) MLModelInterface * interface; 
@property (readonly) MLModelMetadata * metadata; 
+(id)predictionFromFeatures:(id)arg1 classifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)classifierResultFromOutputFeatures:(id)arg1 error:(id*)arg2 ;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)classLabels;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithInterface:(id)arg1 metadata:(id)arg2 configuration:(id)arg3 error:(id*)arg4 ;
-(id)initDescriptionOnlyWithSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
@end
