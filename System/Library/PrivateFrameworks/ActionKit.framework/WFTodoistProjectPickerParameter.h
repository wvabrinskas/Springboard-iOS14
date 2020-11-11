/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFTodoistProjectPickerParameter : WFEnumerationParameter {

	BOOL _hasLoadedProjects;
	NSArray* _possibleStates;
	WFAccountAccessResource* _accessResource;

}

@property (assign,nonatomic) BOOL hasLoadedProjects;                                       //@synthesize hasLoadedProjects=_hasLoadedProjects - In the implementation block
@property (assign,nonatomic,__weak) WFAccountAccessResource * accessResource;              //@synthesize accessResource=_accessResource - In the implementation block
-(void)setProjects:(id)arg1 ;
-(id)projects;
-(void)dealloc;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(WFAccountAccessResource *)accessResource;
-(void)setAccessResource:(WFAccountAccessResource *)arg1 ;
-(void)fetchProjectsIfNeeded;
-(void)loadProjectsFromCache;
-(id)projectNamed:(id)arg1 ;
-(BOOL)hasLoadedProjects;
-(void)setHasLoadedProjects:(BOOL)arg1 ;
@end
