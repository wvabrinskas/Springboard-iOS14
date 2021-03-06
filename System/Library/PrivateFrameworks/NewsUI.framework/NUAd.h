/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class NSString, NUAdBannerView, NSDate;

@interface NUAd : NSObject <NUAdContextProvider> {

	NSString* _identifier;
	NUAdBannerView* _bannerView;
	NSString* _opportunityIdentifier;
	NSDate* _creationDate;
	NSDate* _loadDate;
	NSDate* _unloadDate;
	unsigned long long _state;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) NUAdBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,readonly) NSString * opportunityIdentifier;              //@synthesize opportunityIdentifier=_opportunityIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * loadDate;                               //@synthesize loadDate=_loadDate - In the implementation block
@property (nonatomic,retain) NSDate * unloadDate;                             //@synthesize unloadDate=_unloadDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                        //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setState:(unsigned long long)arg1 ;
-(NSDate *)loadDate;
-(NSString *)identifier;
-(unsigned long long)state;
-(void)setIdentifier:(NSString *)arg1 ;
-(NUAdBannerView *)bannerView;
-(void)setBannerView:(NUAdBannerView *)arg1 ;
-(void)setLoadDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(NSString *)opportunityIdentifier;
-(id)initWithBanner:(id)arg1 identifier:(id)arg2 ;
-(NSDate *)unloadDate;
-(void)setUnloadDate:(NSDate *)arg1 ;
@end

