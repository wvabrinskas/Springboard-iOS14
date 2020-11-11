/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUICardSectionRowModel.h>

@protocol SearchUIWatchListCardRowModelDelegate;
@class NSString, SFImage, SFPunchout, SearchUIWatchListCardsManager, SFWatchListCardSection;

@interface SearchUIWatchListCardRowModel : SearchUICardSectionRowModel {

	BOOL _hasLoaded;
	BOOL _hasError;
	id<SearchUIWatchListCardRowModelDelegate> _delegate;
	NSString* _text;
	SFImage* _image;
	long long _buttonState;
	SFPunchout* _punchout;
	SearchUIWatchListCardsManager* _manager;

}

@property (nonatomic,retain) SearchUIWatchListCardsManager * manager;               //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) BOOL hasLoaded;                                        //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (nonatomic,retain) SFPunchout * punchout;                                 //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,retain) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) SFImage * image;                                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long buttonState;                                 //@synthesize buttonState=_buttonState - In the implementation block
@property (__weak) id<SearchUIWatchListCardRowModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SFWatchListCardSection * cardSection; 
@property (assign,nonatomic) BOOL hasError;                                         //@synthesize hasError=_hasError - In the implementation block
-(void)setText:(NSString *)arg1 ;
-(int)separatorStyle;
-(void)toggleAddToUpNextWithFeedbackDelegate:(id)arg1 ;
-(void)setManager:(SearchUIWatchListCardsManager *)arg1 ;
-(id<SearchUIWatchListCardRowModelDelegate>)delegate;
-(long long)buttonState;
-(void)setButtonState:(long long)arg1 ;
-(NSString *)text;
-(void)setImage:(SFImage *)arg1 ;
-(SFImage *)image;
-(BOOL)isDraggable;
-(SFPunchout *)punchout;
-(void)setDelegate:(id<SearchUIWatchListCardRowModelDelegate>)arg1 ;
-(id)punchouts;
-(BOOL)hasError;
-(void)setHasLoaded:(BOOL)arg1 ;
-(SearchUIWatchListCardsManager *)manager;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)hasLoaded;
-(void)updateWithText:(id)arg1 buttonState:(long long)arg2 image:(id)arg3 punchout:(id)arg4 ;
-(void)updateWithText:(id)arg1 buttonState:(long long)arg2 ;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(BOOL)isTappable;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 asyncRowManager:(id)arg3 queryId:(unsigned long long)arg4 ;
@end
