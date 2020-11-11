/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface AMSRatingsProviderResult : NSObject {

	NSArray* _ratingsStoreFronts;

}

@property (nonatomic,readonly) NSArray * ratingsStoreFronts;              //@synthesize ratingsStoreFronts=_ratingsStoreFronts - In the implementation block
-(NSArray *)ratingsStoreFronts;
-(id)initWithDictionaries:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(id)_mapRatingsDictionaries:(id)arg1 withMediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)arg1 ;
-(id)initWithURLResult:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(id)initWithData:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
@end
