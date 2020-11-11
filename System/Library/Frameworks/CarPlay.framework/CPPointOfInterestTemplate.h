/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlay/CarPlay-Structs.h>
#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CPEntityProviding.h>
#import <libobjc.A.dylib/CPEntityClientTemplateDelegate.h>

@protocol CPPointOfInterestTemplateDelegate;
@class CPPointsOfInterestEntity, NSArray, NAFuture, NSString;

@interface CPPointOfInterestTemplate : CPTemplate <NSSecureCoding, CPEntityProviding, CPEntityClientTemplateDelegate> {

	unsigned long long _selectedIndex;
	id<CPPointOfInterestTemplateDelegate> _pointOfInterestDelegate;
	CPPointsOfInterestEntity* _poiEntity;

}

@property (nonatomic,retain) CPPointsOfInterestEntity * poiEntity;                                              //@synthesize poiEntity=_poiEntity - In the implementation block
@property (nonatomic,retain) NSArray * pointsOfInterest; 
@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) unsigned long long selectedIndex;                                                  //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic,__weak) id<CPPointOfInterestTemplateDelegate> pointOfInterestDelegate;              //@synthesize pointOfInterestDelegate=_pointOfInterestDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)selectedIndex;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)performUpdate;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(id)entity;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(void)handleMapRegionDidChange:(SCD_Struct_CP3)arg1 ;
-(void)handleDidSelectPointOfInterestWithIdentifier:(id)arg1 ;
-(NSArray *)pointsOfInterest;
-(void)setPointsOfInterest:(NSArray *)arg1 ;
-(CPPointsOfInterestEntity *)poiEntity;
-(id<CPPointOfInterestTemplateDelegate>)pointOfInterestDelegate;
-(id)_pointOfInterestWithIdentifier:(id)arg1 ;
-(id)initWithTitle:(id)arg1 pointsOfInterest:(id)arg2 selectedIndex:(unsigned long long)arg3 ;
-(void)setPointsOfInterest:(id)arg1 selectedIndex:(unsigned long long)arg2 ;
-(void)setPointOfInterestDelegate:(id<CPPointOfInterestTemplateDelegate>)arg1 ;
-(void)setPoiEntity:(CPPointsOfInterestEntity *)arg1 ;
@end
