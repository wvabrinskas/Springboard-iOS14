/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXQuickLookService.h>

@protocol SXQuickLookService <NSObject>
@required
-(void)fetchThumbnailForFile:(id)arg1 size:(CGSize)arg2 onCompletion:(/*^block*/id)arg3 onError:(/*^block*/id)arg4;

@end


@class QLThumbnailGenerator, NSString;

@interface SXQuickLookService : NSObject <SXQuickLookService> {

	QLThumbnailGenerator* _generator;

}

@property (nonatomic,readonly) QLThumbnailGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(QLThumbnailGenerator *)generator;
-(id)init;
-(void)fetchThumbnailForFile:(id)arg1 size:(CGSize)arg2 onCompletion:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
@end

