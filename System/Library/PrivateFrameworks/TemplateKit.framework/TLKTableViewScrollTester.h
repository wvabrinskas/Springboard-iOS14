/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UITableView;

@interface TLKTableViewScrollTester : NSObject {

	BOOL _directionUp;
	BOOL _finishedFirstScroll;
	double _scrollTime;
	/*^block*/id _completion;
	/*^block*/id _firstScroll;
	UITableView* _tableView;
	double _startTime;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id firstScroll;                          //@synthesize firstScroll=_firstScroll - In the implementation block
@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL directionUp;                      //@synthesize directionUp=_directionUp - In the implementation block
@property (assign,nonatomic) double startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL finishedFirstScroll;              //@synthesize finishedFirstScroll=_finishedFirstScroll - In the implementation block
@property (assign,nonatomic) double scrollTime;                     //@synthesize scrollTime=_scrollTime - In the implementation block
-(void)setTableView:(UITableView *)arg1 ;
-(id)init;
-(double)startTime;
-(void)setCompletion:(id)arg1 ;
-(UITableView *)tableView;
-(void)setScrollTime:(double)arg1 ;
-(double)scrollTime;
-(void)performScrollTestOnTableView:(id)arg1 firstScroll:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFinishedFirstScroll:(BOOL)arg1 ;
-(void)setFirstScroll:(id)arg1 ;
-(void)finishFirstScrollIfNeeded;
-(BOOL)directionUp;
-(void)setDirectionUp:(BOOL)arg1 ;
-(BOOL)finishedFirstScroll;
-(id)firstScroll;
-(void)performScrollTestOnTableView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)completion;
-(void)setStartTime:(double)arg1 ;
-(void)fire:(id)arg1 ;
@end
