/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PMEditProviderProtocol.h>

@protocol PMEditProviderDelegate;
@class VEKProduction, NSString;

@interface PMTitleEditorProvider : NSObject <PMEditProviderProtocol> {

	VEKProduction* _production;
	id<PMEditProviderDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subTitle; 
@property (nonatomic,retain) VEKProduction * production;                              //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PMEditProviderDelegate>)delegate;
-(void)setProduction:(VEKProduction *)arg1 ;
-(void)setDelegate:(id<PMEditProviderDelegate>)arg1 ;
-(NSString *)subTitle;
-(VEKProduction *)production;
-(NSString *)title;
-(void)updateTitle:(id)arg1 ;
-(id)initWithProduction:(id)arg1 ;
-(void)updateSubtitle:(id)arg1 ;
-(id)defaultMemoriesTitleHelper;
@end

