//
//  DTHTMLElementBorder.h
//  DTCoreText
//
//  Created by Ron Cirka on 12/31/12.
//  Copyright (c) 2012 Drobnik.com. All rights reserved.
//

#import "DTHTMLElementBorderAttributes.h"

@interface DTHTMLElementBorderStyle : NSObject

@property (strong, nonatomic) DTHTMLElementBorderAttributes* all;
@property (strong, nonatomic) DTHTMLElementBorderAttributes* top;
@property (strong, nonatomic) DTHTMLElementBorderAttributes* bottom;
@property (strong, nonatomic) DTHTMLElementBorderAttributes* left;
@property (strong, nonatomic) DTHTMLElementBorderAttributes* right;


@end
