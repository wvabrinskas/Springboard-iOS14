/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaControls/MediaControls-Structs.h>
@class MediaControlsEndpointController, NSString;

@interface MRUTVRemoteController : NSObject {

	BOOL _isCoverSheet;
	MediaControlsEndpointController* _endpointController;

}

@property (nonatomic,readonly) MediaControlsEndpointController * endpointController;              //@synthesize endpointController=_endpointController - In the implementation block
@property (nonatomic,readonly) NSString * mediaRemoteIdentifier; 
@property (nonatomic,readonly) NSString * airplayIdentifier; 
@property (nonatomic,readonly) BOOL shouldShowTVRemoteButton; 
@property (assign,nonatomic) BOOL isCoverSheet;                                                   //@synthesize isCoverSheet=_isCoverSheet - In the implementation block
-(BOOL)shouldShowTVRemoteButton;
-(NSString *)mediaRemoteIdentifier;
-(MediaControlsEndpointController *)endpointController;
-(void)presentTVRemote;
-(void)prewarmIfNeeded;
-(id)initWithEndpointController:(id)arg1 ;
-(NSString *)airplayIdentifier;
-(void)presentLanguageOptionsAtCenter:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isCoverSheet;
-(void)setIsCoverSheet:(BOOL)arg1 ;
@end
