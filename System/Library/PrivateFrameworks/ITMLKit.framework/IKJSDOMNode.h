/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, IKDOMNode, IKDOMNodeList, IKDOMDocument, JSValue;


@protocol IKJSDOMNode <JSExport>
@property (nonatomic,retain,readonly) NSString * nodeName; 
@property (nonatomic,retain) NSString * nodeValue; 
@property (nonatomic,readonly) long long nodeType; 
@property (nonatomic,__weak,readonly) IKDOMNode * parentNode; 
@property (nonatomic,retain,readonly) IKDOMNodeList * childNodes; 
@property (nonatomic,retain,readonly) IKDOMNode * firstChild; 
@property (nonatomic,retain,readonly) IKDOMNode * lastChild; 
@property (nonatomic,__weak,readonly) IKDOMNode * previousSibling; 
@property (nonatomic,__weak,readonly) IKDOMNode * nextSibling; 
@property (nonatomic,__weak,readonly) IKDOMDocument * ownerDocument; 
@property (nonatomic,retain) NSString * textContent; 
@property (assign,nonatomic,__weak) JSValue * dataItem; 
@required
-(id)removeChild:(id)arg1;
-(long long)nodeType;
-(BOOL)contains:(id)arg1;
-(NSString *)nodeName;
-(IKDOMNodeList *)childNodes;
-(NSString *)textContent;
-(IKDOMNode *)nextSibling;
-(IKDOMNode *)previousSibling;
-(IKDOMNode *)lastChild;
-(IKDOMNode *)parentNode;
-(IKDOMNode *)firstChild;
-(id)appendChild:(id)arg1;
-(BOOL)hasChildNodes;
-(void)setTextContent:(id)arg1;
-(BOOL)isSameNode:(id)arg1;
-(IKDOMDocument *)ownerDocument;
-(NSString *)nodeValue;
-(void)setNodeValue:(id)arg1;
-(id)cloneNode:(BOOL)arg1;
-(BOOL)isEqualNode:(id)arg1;
-(id)insertBefore:(id)arg1 :(id)arg2;
-(id)replaceChild:(id)arg1 :(id)arg2;
-(void)setDataItem:(id)arg1;
-(JSValue *)dataItem;
-(id)getFeature:(id)arg1 :(id)arg2;

@end
