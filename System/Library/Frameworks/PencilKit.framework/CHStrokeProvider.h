/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSOrderedSet;


@protocol CHStrokeProvider <NSObject>
@property (retain,readonly) id<CHStrokeProviderVersion> strokeProviderVersion; 
@property (copy,readonly) NSArray * orderedStrokes; 
@property (readonly) long long groupingPriority; 
@property (readonly) CGSize drawingCanvasSize; 
@property (copy,readonly) NSOrderedSet * visibleStrokeEncodedIdentifiers; 
@optional
-(BOOL)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2;
-(long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;
-(CGSize)drawingCanvasSize;
-(NSOrderedSet *)visibleStrokeEncodedIdentifiers;

@required
-(id<CHStrokeProviderVersion>)strokeProviderVersion;
-(NSArray *)orderedStrokes;
-(id)strokeForIdentifier:(id)arg1;
-(id)encodedStrokeIdentifier:(id)arg1;
-(long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
-(unsigned long long)compareStyleOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
-(id)strokeIdentifierFromData:(id)arg1;
-(long long)groupingPriority;

@end

