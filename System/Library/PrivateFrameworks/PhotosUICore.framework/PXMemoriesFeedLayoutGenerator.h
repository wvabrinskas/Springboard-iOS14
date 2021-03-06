/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXLayoutGenerator.h>

@class PXMemoriesFeedLayoutMetrics;

@interface PXMemoriesFeedLayoutGenerator : PXLayoutGenerator {

	BOOL _includeDateHeader;
	BOOL _isFirstHeader;

}

@property (assign,nonatomic) BOOL includeDateHeader;                           //@synthesize includeDateHeader=_includeDateHeader - In the implementation block
@property (assign,nonatomic) BOOL isFirstHeader;                               //@synthesize isFirstHeader=_isFirstHeader - In the implementation block
@property (nonatomic,copy) PXMemoriesFeedLayoutMetrics * metrics; 
-(BOOL)includeDateHeader;
-(void)setIncludeDateHeader:(BOOL)arg1 ;
-(BOOL)isFirstHeader;
-(void)setIsFirstHeader:(BOOL)arg1 ;
-(id)initWithMetrics:(id)arg1 ;
@end

