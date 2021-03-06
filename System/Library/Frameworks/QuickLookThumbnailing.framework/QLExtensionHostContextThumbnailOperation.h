/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLAsynchronousOperation.h>

@protocol QLTExtensionThumbnailItem;
@class QLThumbnailHostContext, NSDictionary;

@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation {

	QLThumbnailHostContext* _hostContext;
	/*^block*/id _serviceErrorHandler;
	/*^block*/id _completionHandler;
	id<QLTExtensionThumbnailItem> _item;
	double _minimumSize;
	double _scale;
	unsigned long long _badgeType;
	NSDictionary* _generatorData;
	CGSize _size;

}

@property (nonatomic,retain) QLThumbnailHostContext * hostContext;              //@synthesize hostContext=_hostContext - In the implementation block
@property (nonatomic,copy) id serviceErrorHandler;                              //@synthesize serviceErrorHandler=_serviceErrorHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) id<QLTExtensionThumbnailItem> item;                //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) CGSize size;                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double minimumSize;                                //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) double scale;                                      //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long badgeType;                      //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,retain) NSDictionary * generatorData;                      //@synthesize generatorData=_generatorData - In the implementation block
-(void)finish;
-(void)setSize:(CGSize)arg1 ;
-(unsigned long long)badgeType;
-(id<QLTExtensionThumbnailItem>)item;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(id)completionHandler;
-(CGSize)size;
-(void)setScale:(double)arg1 ;
-(void)setItem:(id<QLTExtensionThumbnailItem>)arg1 ;
-(void)main;
-(void)setHostContext:(QLThumbnailHostContext *)arg1 ;
-(double)minimumSize;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setMinimumSize:(double)arg1 ;
-(QLThumbnailHostContext *)hostContext;
-(double)scale;
-(id)initWithThumbnailHostContext:(id)arg1 item:(id)arg2 size:(CGSize)arg3 minimumSize:(double)arg4 scale:(double)arg5 badgeType:(unsigned long long)arg6 generatorData:(id)arg7 completionHandler:(/*^block*/id)arg8 serviceErrorHandler:(/*^block*/id)arg9 ;
-(id)serviceErrorHandler;
-(NSDictionary *)generatorData;
-(void)setServiceErrorHandler:(id)arg1 ;
-(void)setGeneratorData:(NSDictionary *)arg1 ;
@end

